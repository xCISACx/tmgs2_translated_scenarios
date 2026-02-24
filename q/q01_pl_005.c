section "q01_pl_005"{
    Background_Bg_GS2("BG_SCB00_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(0, 1) >= 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "We've arrived at Habataki city!\nI had fun on the field trip.\nWell, time to go home!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(The field trip has ended, but it\nwas fun.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Finally, We've arrived at Habataki\ncity...\nI'm kind of tired.\nTime to go home...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how the field trip\nended...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
