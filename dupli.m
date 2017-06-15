%st= input ('enter the string','s');
%[c,word] = dupli(st);

function [count,let] = dupli(str)
   %count = zeros(length(str));
   %i=zeros(len(str));
   l=0;
   for j = 1:(length(str)-l)
        for i=2:length(str)
       %count=[count 
            if (str(j) == str(i))
                count(j) = count(j) + 1;
                str=str-str(i)-str(1);
            end
        end
        l = count(j);
   end
   count = max(count);
   let = str(count);
end