section "s09_s1_000"{
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(14, "S1_04F", 0);
    Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("S0914000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Ah, fortunes! Sis, let's try!");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Should I?");
    Message_MsgSel("Okay, let's do it.", "I'll pass this year.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(14, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0914000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Now you're talking!\nCome on, quickly. Quickly!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ahaha. Wait a minute.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Giggles* Yuu-kun was a little too\nexcited.)");
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        System_Call_GS2("S10", "PL", 0);
        System_Call_GS2("S11", "S1", 0);
        break ;
        case 1:
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0914000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Eh, you don't want to? How boring.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seemed like Yuu-kun was looking\nforward to it.\nWas it bad to decline?)");
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        break ;
        }
    System_Call_GS2("S12", "S1", 0);
    }
