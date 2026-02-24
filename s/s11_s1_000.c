section "s11_s1_000"{
    if (Parameter_GetCh1Param(14, 335) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what Yuu-kun got...)");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(14, 2, (#1));
        Character_Chara_GS2(14, "S1_04F", 0);
        Voice_PlayVoice("S1114000_N00000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Hmm～...");
        Message_Who(0);
        Message_MsgDisp("主人公", "What is it, Yuu-kun? ... Good luck.");
        Character_BlinkStart(14, 3, (#1));
        Voice_PlayVoice("S1114000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Crap, how boring.\nIt's not even half interesting.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what Yuu-kun got...)");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(14, 3, (#1));
        Character_Chara_GS2(14, "S1_04F", 0);
        Voice_PlayVoice("S1114000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "... Good luck. *Sigh* How boring.\nIt's good luck every year.");
        Character_BlinkStart(14, 0, (#1));
        Voice_PlayVoice("S1114000_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "The result could have been more\nstimulating.\nWith super good luck or intense good\nluck.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(What kind of good luck would that\nbe...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 335, 1);
    }
