section "h24_m7_000"{
    if (Parameter_GetCh1Param(7, 130) <= 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is the Lacrosse Club having a\npractice match?\nPut your energy into it.");
        Message_Who(0);
        Message_MsgDisp("主人公", ".........\nDoesn't the Track and Field Club\nalso have practice?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("H2407000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Now and then.\nBut it feels different as the\nadvisor.\nWhen I watch this game, I wonder if\nit will influence me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I have to do my best for\nthe sake of the Track and Field\nClub, too!)");
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("", 7, "H2407000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, I came here\nto support you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!\nThank you very much.");
        Voice_PlayVoice("H2407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I am glad that I made it on time.\nI will be cheering everyone on, but\nI want you in particular to do your\nbest.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2407000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "...\nBecause you are my precious student.\nIt would be nice if you can learn\nsomething from this match.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ also came to\nwatch, so I must do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
