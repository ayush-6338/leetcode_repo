# Write your MySQL query statement below
select em.name as Employee
from Employee em
inner join Employee as mg 
on em.ManagerId = mg.id
where em.salary > mg.salary