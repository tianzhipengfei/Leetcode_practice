# Write your MySQL query statement below
SELECT id, movie, description, rating FROM cinema WHERE id % 2 = 1 AND NOT ( description LIKE '%boring%') ORDER BY rating DESC;