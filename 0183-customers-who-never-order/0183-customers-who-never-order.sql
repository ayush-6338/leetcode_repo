# Write your MySQL query statement below
select cs.name as Customers 
from Customers cs
left join Orders od
on cs.id = od.customerId
where od.customerId is null