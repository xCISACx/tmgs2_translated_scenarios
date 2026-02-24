section "h18_m7_000"{
    if (Parameter_GetCh1Param(7, 130) >= 4){
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(The national championships are\nfinally here!\nI'm excited...)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝! You came.");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("H1807000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes.\nI have to watch this fierce fight.");
        Voice_PlayVoice("H1807000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You also look quite excited.\nI'm looking more and more forward to\nthis.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, you can tell?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1807000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's also an event for the manager.\nPlease do your best, and be wary of\nthe heat.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, thank you very much!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best to support\nthem!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
