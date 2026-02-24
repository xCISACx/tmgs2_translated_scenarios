section "n01_pl_005"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(The fifth exam is home econ.)");
    Graphic_OpenAnim(20);
    int var1 = Parameter_Test_Check();
    if (var1 == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes, perfect!!)");
        }
    else if (var1 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did great.)");
        }
    else if (var1 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, it should be okay.)");
        }
    else if (var1 == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Not quite good...)");
        }
    else if (var1 == 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "(No! This is too bad...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
