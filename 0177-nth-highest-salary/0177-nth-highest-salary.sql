CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
Begin
    set N = N-1;
  RETURN (
      # Write your MySQL query statement below.
      select distinct salary 
      as getNthHighestSalary
      from Employee
      order by salary desc
      Limit 1 OFFSET N
  );
END