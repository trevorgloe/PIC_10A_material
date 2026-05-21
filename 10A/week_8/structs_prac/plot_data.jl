using PlotlyJS
using DelimitedFiles

# Reads a file with space-separated numbers into a Matrix{Float64}
data = readdlm("data.txt")
data = data[1:end-1]
N = length(data)
T = 2
t = scatter(x=LinRange(0,T, N), y=data, mode="lines")
println(data)
plot([t], Layout(xaxis=attr(title="Time (s)"), yaxis=attr(title="y")))
# n = 10
# plot([scatter(x=1:n, y=rand(n))])
