section "q31_m7_000"{
    if (Parameter_GetCh1Param(7, 130) <= 2){
        SoundEffect_PlayStream(2, "SS_T_00_999_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, ｛Wakaouji＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("Q0907000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello, good morning.");
        Voice_PlayVoice("Q0907000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is this everyone?\nWell then, let's get going.");
        SoundEffect_StopStream(2, 40);
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        SoundEffect_PlayStream(2, "SS_T_00_999_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, ｛Wakaouji＊＊｝ is...\nAh, there he is!)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_17F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Wakaouji＊＊｝.");
        Voice_PlayVoice("Q0907000_G00200", 7, "Q0907000_G00201");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hi, ｛主人公｝.\nGood morning.");
        Voice_PlayVoice("Q0907000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "All members will be in sets of two\npeople or more people.\nWe'll depart when all are present.");
        SoundEffect_StopStream(2, 40);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, ｛Wakaouji＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Wakaouji＊＊｝.");
        Character_Chara_GS2(7, "M7_17F", 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("Q0907000_G00400", 7, "Q0907000_G00401");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello, good morning.\nYou have my best regards for today,\n｛主人公｝.");
        Voice_PlayVoice("Q0907000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Even though it is a little early,\nit'd be best if you enjoyed your\ntime longer.\nLet's depart without delay.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
