section "l06_m7_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    if (System_GlobalWork(23, 1) == 7){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "FD_07_030_00000");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nHere is a return gift for\nValentine's Day.\nThank you for the chocolate last\nmonth.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nThank you very much.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_07_030_00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Will you be going to him, now?\nHow nice...\nYou guys are madly in love!");
        Character_Chara_GS2(7, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(7, 130) <= 2){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0607000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is a return gift for\nValentine's Day.\nEven the principal said that this\nwas fine.");
        Voice_PlayVoice("L0607000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Excuse me, now.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, this is just out of\nobligation.)");
        }
    else if (Parameter_GetCh1Param(7, 130) >= 3){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(7, "M7_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0607000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Today is White Day.\nSo here is your present.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow! Thank you very much.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0607000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Do not let other people see it.\nIf the principal found out, I would\nhave my neck wrung.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I will be careful...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("L0607000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, please. I will leave now.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        if (Parameter_GetCh1Param(7, 330) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder what this present is?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Chemical Compound Model\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, that sounds like something\n｛Wakaouji＊＊｝ would give.");
            Parameter_AddCh1Param(7, 330, 1);
            Parameter_AddPl1Param(16, 10);
            }
        else if (Parameter_GetCh1Param(7, 330) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder what this present is?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Cat-adorned Paper Knife\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "Wow, how cute!\nI'll use it right away.");
            Parameter_AddPl1Param(16, 10);
            Parameter_AddPl1Param(21, 5);
            }
        }
    Parameter_InCh1Param(7, 555, 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
