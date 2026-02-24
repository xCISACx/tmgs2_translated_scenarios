section "b03_m5_220"{
    if (Parameter_ChkSpEvent("B05", "M5", 0) == 1){
        System_Call_GS2("B05", "M5", 0);
        }
    else {
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 2, (#1), 2);
        Background_Bg_GS2("BG_TR400_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305220_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "As expected, Japanese castles are\nnice...\nAmazing...");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(5, "NON");
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305220_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Where should we go first?");
        Message_MsgSel("Let's go see the display corner.", "I want to go to the castle keep.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Voice_PlayVoice("B0305220_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nI'm really looking forward to what\nwill be on display.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 221);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Voice_PlayVoice("B0305220_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We can get a feel of how a feudal\nlord would feel looking over\nHabataki City.\nLet's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 222);
            break ;
            }
        }
    }
