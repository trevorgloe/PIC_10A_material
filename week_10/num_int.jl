using PlotlyJS

x = LinRange(0, 4, 8)

f(x) = sin(x)

y = f.(x)
xth = LinRange(0, 4, 200)
yth = f.(xth)
t2 = scatter(x=xth, y=yth, line=attr(color="red", width=3))
t1 = scatter(x=x, y=y, fill="tozeroy", fillcolor="rgba(0,0,255,0.3)", line=attr(color="rgba(0,0,0,0)", width=4))
list = [t1, t2]
for j = 1:length(x)
        t = scatter(x=[x[j], x[j]], y=[0, y[j]], line=attr(color="blue", width=2.5))
        push!(list, t)
end
p = plot(list, Layout(xaxis_title="x", yaxis_title="y", showlegend=false))

