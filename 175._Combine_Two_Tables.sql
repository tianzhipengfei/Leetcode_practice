# Write your MySQL query statement below
SELECT FirstName, LastName, City, State FROM
(SELECT PersonId, FirstName, LastName FROM Person) t1
LEFT JOIN
(SELECT PersonId, City, State FROM Address) t2
ON t1.PersonID = t2.PersonID