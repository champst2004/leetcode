-- https://leetcode.com/problems/combine-two-tables/description/

select p.firstName, p.lastName, a.city, a.state from person p left join address a on p.personid = a.personid;