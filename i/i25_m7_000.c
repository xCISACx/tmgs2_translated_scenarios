section "i25_m7_000"{
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_06F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("I2507000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I thought it was you.\nSo you are working here part-time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I am.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I2507000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You are more lively here than at\nschool.\nPlease do your best.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I will do my best.)");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_06F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("I2507000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Are you working hard, Miss Worker?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nYes, things are going well.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("I2507000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hmm, that is fine.\nYou are making a great effort to\nstudy the workings of society.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Pardon?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("I2507000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "As a member of society, I came here\nto patronize you.\nI will be leaving, now.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Was ｛Wakaouji＊＊｝ cheering\nme on...?)");
        }
    else {
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        SoundEffect_PlayStream(3, "SS_T_00_142_M00");
        Voice_PlayVoice("I2507000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("？？？", "...\nAmigo♪");
        Message_Who(0);
        Message_MsgDisp("主人公", "W-What!? ...\nAh, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_06F", 0);
        Voice_PlayVoice("", 7, "I2507000_G00600");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝....\nSorry, it was enjoyable playing\naround with you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha!\nThe sound of the maracas are quite\ncheery.");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I2507000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, I think so, too....\nRight, I will buy these.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!\nThank you very much for your\npurchase, ｛Wakaouji＊＊｝!");
        SoundEffect_StopStream(3, 40);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
