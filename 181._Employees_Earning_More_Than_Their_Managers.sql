# Write your MySQL query statement below
SELECT e2.Name as Employee FROM Employee e1, Employee e2
WHERE e1.Id = e2.ManagerId AND e1.Salary < e2.Salary;