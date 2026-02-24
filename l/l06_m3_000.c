section "l06_m3_000"{
    if (System_GlobalWork(23, 1) == 3){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
        Voice_PlayVoice("", 3, "FD_03_030_00000");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nThis is a return gift for last\nmonth.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, ｛Hikami＊＊｝.");
        Voice_PlayVoice("FD_03_030_00100", #1, "");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is fine.\nRather, you must go and collect your\ngift from him.\nOkay?");
        Character_Chara_GS2(3, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(3, 130) <= 2){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
        Voice_PlayVoice("", 3, "L0603000_C00000");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nThis is a return gift for last\nmonth.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, ｛Hikami＊＊｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, this is just out of\nobligation.)");
        }
    else if (Parameter_GetCh1Param(3, 130) >= 3){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
        Voice_PlayVoice("", 3, "L0603000_C00100");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nI received quite a wonderful thing\nlast month.\nThis is a gift in return.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow, thanks!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("L0603000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It is just a normal return gift.\nPlease do not give me something in\nreturn for this.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        if (Parameter_GetCh1Param(3, 330) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder what this present is?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Assorted Marshmallows\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, they look yummy! But...\ncan I finish all of this?)");
            Parameter_AddCh1Param(3, 330, 1);
            Parameter_AddPl1Param(16, 10);
            }
        else if (Parameter_GetCh1Param(3, 330) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "I wonder what this present is?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Shooting Star Strap\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, how cute!\nI should attach it to my cell phone\nright away.)");
            Parameter_AddPl1Param(21, 15);
            }
        }
    Parameter_InCh1Param(3, 555, 0);
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
