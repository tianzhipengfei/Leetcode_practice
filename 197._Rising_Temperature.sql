# Write your MySQL query statement below
# For mysql DATE_ADD(date, INTERNUL duration) 
# For server or Oracle DATEADD(unit, num, date)
SELECT b.Id from Weather a, Weather b WHERE DATE_ADD(a.RecordDate, INTERVAL 1 DAY) = b.RecordDate AND a.Temperature < b.Temperature