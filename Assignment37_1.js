//1.Write a program which checks whether 15th bit is On or OFF. 
var BitOpration = /** @class */ (function () {
    function BitOpration(iVal) {
        this.iNo = iVal;
        this.iMask = 0X00004000;
        this.iResult = 0;
    }
    BitOpration.prototype.ChkBit = function () {
        this.iResult = this.iNo & this.iMask;
        if (this.iResult == this.iMask) {
            return true;
        }
        else {
            return false;
        }
    };
    return BitOpration;
}());
var bRet = false;
var Obj = new BitOpration(16384);
bRet = Obj.ChkBit();
if (bRet == true) {
    console.log("The 15th Bit is On...");
}
else {
    console.log("The 15th Bit is OFF...");
}
var Obj1 = new BitOpration(10000);
bRet = Obj1.ChkBit();
if (bRet == true) {
    console.log("The 15th Bit is On...");
}
else {
    console.log("The 15th Bit is OFF...");
}
