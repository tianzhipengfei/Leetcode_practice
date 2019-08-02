# Write your MySQL query statement below
SELECT DISTINCT L1.Num as ConsecutiveNums
FROM Logs AS L1, Logs AS L2, Logs AS L3
WHERE L1.Num = L2.Num AND L1.Num = L3.Num AND L1.Id - L2.Id = 1 AND L2.Id - L3.Id = 1;
