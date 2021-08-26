---@class Actor
local checkfloat = {}
local ksl = import("KismetSystemLibrary")

function checkfloat:Initialize()
end

function checkfloat:BP_ActorIsFloating(CheckActor)
    local actorposition = CheckActor:K2_GetActorLocation()
    print(self.Mycheckmethod)
    if (self.Mycheckmethod == 0) then
        ksl.
    elseif (self.Mycheckmethod == 1) then

    else

    end
end

return checkfloat