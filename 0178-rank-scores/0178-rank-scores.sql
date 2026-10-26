# Write your MySQL query statement below

SELECT score , 
    (select count(distinct score) from Scores where score >= s.Score) `Rank`
from Scores s
order by score desc;