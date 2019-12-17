# Write your MySQL query statement below
SELECT b.Id from Weather a, Weather b WHERE a.Id = b.Id - 1 AND a.Temperature < b.Temperature