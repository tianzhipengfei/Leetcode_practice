
# Write your MySQL query statement below

# Method 1 join

select d0.id, Jan_Revenue,Feb_Revenue,Mar_Revenue,Apr_Revenue,May_Revenue,Jun_Revenue,Jul_Revenue,
Aug_Revenue,Sep_Revenue,Oct_Revenue,Nov_Revenue,Dec_Revenue from
(select distinct id from Department order by id) d0
left join 
(select id,revenue as Jan_Revenue from Department where month = 'Jan') d1 on d0.id = d1.id
left join 
(select id,revenue as Feb_Revenue from Department where month = 'Feb') d2 on d0.id = d2.id
left join 
(select id,revenue as Mar_Revenue from Department where month = 'Mar') d3 on d0.id = d3.id
left join 
(select id,revenue as Apr_Revenue from Department where month = 'Apr') d4 on d0.id = d4.id
left join 
(select id,revenue as May_Revenue from Department where month = 'May') d5 on d0.id = d5.id
left join 
(select id,revenue as Jun_Revenue from Department where month = 'Jun') d6 on d0.id = d6.id
left join 
(select id,revenue as Jul_Revenue from Department where month = 'Jul') d7 on d0.id = d7.id
left join 
(select id,revenue as Aug_Revenue from Department where month = 'Aug') d8 on d0.id = d8.id
left join 
(select id,revenue as Sep_Revenue from Department where month = 'Sep') d9 on d0.id = d9.id
left join 
(select id,revenue as Oct_Revenue from Department where month = 'Oct') d10 on d0.id = d10.id
left join 
(select id,revenue as Nov_Revenue from Department where month = 'Nov') d11 on d0.id = d11.id
left join 
(select id,revenue as Dec_Revenue from Department where month = 'Dec') d12 on d0.id = d12.id;

# Method 2 sum case

Select 
id, 
sum(case when month='Jan' then revenue else null end) as Jan_Revenue,
sum(case when month='Feb' then revenue else null end) as Feb_Revenue,
sum(case when month='Mar' then revenue else null end) as Mar_Revenue,
sum(case when month='Apr' then revenue else null end) as Apr_Revenue,
sum(case when month='May' then revenue else null end) as May_Revenue,
sum(case when month='Jun' then revenue else null end) as Jun_Revenue,
sum(case when month='Jul' then revenue else null end) as Jul_Revenue,
sum(case when month='Aug' then revenue else null end) as Aug_Revenue,
sum(case when month='Sep' then revenue else null end) as Sep_Revenue,
sum(case when month='Oct' then revenue else null end) as Oct_Revenue,
sum(case when month='Nov' then revenue else null end) as Nov_Revenue,
sum(case when month='Dec' then revenue else null end) as Dec_Revenue
FROM
Department
group by id 