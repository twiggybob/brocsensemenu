-- Gui to Lua
-- Version: 3.2

-- Instances:

local ScreenGui = Instance.new("ScreenGui")
local TextLabel = Instance.new("TextLabel")
local UIGradient = Instance.new("UIGradient")
local UITextSizeConstraint = Instance.new("UITextSizeConstraint")
local TextLabel_2 = Instance.new("TextLabel")
local UITextSizeConstraint_2 = Instance.new("UITextSizeConstraint")
local TextLabel_3 = Instance.new("TextLabel")
local UITextSizeConstraint_3 = Instance.new("UITextSizeConstraint")
local TextLabel_4 = Instance.new("TextLabel")
local UITextSizeConstraint_4 = Instance.new("UITextSizeConstraint")
local CONNECTEDUSER = Instance.new("TextLabel")

--Properties:

ScreenGui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")

TextLabel.Parent = ScreenGui
TextLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.BackgroundTransparency = 1.000
TextLabel.Position = UDim2.new(0.00511322124, 0, 0.44831726, 0)
TextLabel.Size = UDim2.new(0, 100, 0, 17)
TextLabel.Font = Enum.Font.SourceSansBold
TextLabel.Text = "BROCSENSE.PUB"
TextLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.TextScaled = true
TextLabel.TextSize = 12.000
TextLabel.TextStrokeTransparency = 0.000
TextLabel.TextWrapped = true
TextLabel.TextXAlignment = Enum.TextXAlignment.Left

UIGradient.Color = ColorSequence.new{ColorSequenceKeypoint.new(0.00, Color3.fromRGB(255, 255, 255)), ColorSequenceKeypoint.new(0.50, Color3.fromRGB(0, 0, 0)), ColorSequenceKeypoint.new(1.00, Color3.fromRGB(255, 255, 255))}
UIGradient.Rotation = 5
UIGradient.Parent = TextLabel

UITextSizeConstraint.Parent = TextLabel
UITextSizeConstraint.MaxTextSize = 12

TextLabel_2.Parent = ScreenGui
TextLabel_2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_2.BackgroundTransparency = 1.000
TextLabel_2.Position = UDim2.new(0.00511322124, 0, 0.46874997, 0)
TextLabel_2.Size = UDim2.new(0, 100, 0, 17)
TextLabel_2.Font = Enum.Font.SourceSansBold
TextLabel_2.Text = "ROLE: DEVELOPER"
TextLabel_2.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_2.TextScaled = true
TextLabel_2.TextSize = 12.000
TextLabel_2.TextStrokeTransparency = 0.000
TextLabel_2.TextWrapped = true
TextLabel_2.TextXAlignment = Enum.TextXAlignment.Left

UITextSizeConstraint_2.Parent = TextLabel_2
UITextSizeConstraint_2.MaxTextSize = 12

TextLabel_3.Parent = ScreenGui
TextLabel_3.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_3.BackgroundTransparency = 1.000
TextLabel_3.Position = UDim2.new(0.00511322124, 0, 0.489182681, 0)
TextLabel_3.Size = UDim2.new(0, 100, 0, 17)
TextLabel_3.Font = Enum.Font.SourceSansBold
TextLabel_3.Text = "VERSION: STABLE"
TextLabel_3.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_3.TextScaled = true
TextLabel_3.TextSize = 12.000
TextLabel_3.TextStrokeTransparency = 0.000
TextLabel_3.TextWrapped = true
TextLabel_3.TextXAlignment = Enum.TextXAlignment.Left

UITextSizeConstraint_3.Parent = TextLabel_3
UITextSizeConstraint_3.MaxTextSize = 12

TextLabel_4.Parent = ScreenGui
TextLabel_4.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_4.BackgroundTransparency = 1.000
TextLabel_4.Position = UDim2.new(0.00511322124, 0, 0.509615362, 0)
TextLabel_4.Size = UDim2.new(0, 100, 0, 17)
TextLabel_4.Font = Enum.Font.SourceSansBold
TextLabel_4.Text = "DESYNC: DISABLED"
TextLabel_4.TextColor3 = Color3.fromRGB(255, 255, 255)
TextLabel_4.TextScaled = true
TextLabel_4.TextSize = 12.000
TextLabel_4.TextStrokeTransparency = 0.000
TextLabel_4.TextWrapped = true
TextLabel_4.TextXAlignment = Enum.TextXAlignment.Left

UITextSizeConstraint_4.Parent = TextLabel_4
UITextSizeConstraint_4.MaxTextSize = 12

CONNECTEDUSER.Name = "CONNECTEDUSER"
CONNECTEDUSER.Parent = ScreenGui
CONNECTEDUSER.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
CONNECTEDUSER.BackgroundTransparency = 1.000
CONNECTEDUSER.Position = UDim2.new(0.00511322124, 0, 0.530048072, 0)
CONNECTEDUSER.Size = UDim2.new(0, 150, 0, 17)
CONNECTEDUSER.Font = Enum.Font.SourceSansBold
CONNECTEDUSER.Text = "LIFEEEEHAAAACK BITCH!!! (◣_◢)"
CONNECTEDUSER.TextColor3 = Color3.fromRGB(255, 255, 255)
CONNECTEDUSER.TextSize = 12.000
CONNECTEDUSER.TextStrokeTransparency = 0.000
CONNECTEDUSER.TextWrapped = true
CONNECTEDUSER.TextXAlignment = Enum.TextXAlignment.Left

-- Scripts:

local function GHEZQ_fake_script() -- TextLabel.LocalScript 
	local script = Instance.new('LocalScript', TextLabel)

	local button = script.Parent
	local gradient = button.UIGradient
	local ts = game:GetService("TweenService") 
	local ti = TweenInfo.new(1, Enum.EasingStyle.Linear, Enum.EasingDirection.Out)
	local offset1 = {Offset = Vector2.new(1, 0)}
	local create = ts:Create(gradient, ti, offset1)
	local startingPos = Vector2.new(-1, 0) 
	local addWait = 1.5
	local function animate()
		create:Play()
		create.Completed:Wait()
		gradient.Offset = startingPos 
		animate()
	end
	animate()
end
coroutine.wrap(GHEZQ_fake_script)()
