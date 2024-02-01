const s=10;
var a:array[1..s,1..s]of integer;
    m,n,i,j,k,max,min,b,d:integer;
  
begin
m:=3;
n:=3;
//write('Кол-во строк');
//readln(m);
//write('Кол-во столбцов');
//readln(n);
for i:=1 to m do
for j:=1 to n do
 begin
  a[i,j]:=random(100)
 end;
for i:=1 to m do
 begin
  for j:=1 to n do
  write(a[i,j]:3);
  writeln;
 end;

i:=1;
while(i<=m) do
 begin
  max:=a[i,1];
  d:=1;
  for j:=1 to n do
  if a[i,j]>max then
   begin
    max:=a[i,j];
    d:=j;
   end;
  min:=a[1,d];
  b:=1;
  for k:=1 to m do
  if a[k,d]<min then
    begin
      min:=a[k,d];
      b:=i;
    end;
  if min=max then begin write('Седловая точка a[',b,',',d,']=',a[b,d]); exit end
  else i:=i+1;
 end;


 
end.