section "f10_g1_100"{
    Character_BlinkStart(10, 1, (#1), 1);
    Character_BlinkStart(10, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Character_ChFace(0, 0, 0);
    if (Parameter_GetCh1Param(10, 326) == 0){
        Parameter_AddCh1Param(10, 326, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Toudou＊＊｝.");
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("F1010100_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Don't be so hesitant.\nIt's something that you can do, so\ngive it a shot.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is she listening to someone's\nproblems?\n｛Toudou＊＊｝ actually takes\ngood care of people.)");
        }
    else if (Parameter_GetCh1Param(10, 326) == 1){
        Parameter_AddCh1Param(10, 326, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Toudou＊＊｝.");
        Character_Chara_GS2(10, "G1_01F", 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("F1010100_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Who's the punk that dropped their\ngarbage in the corridor...?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is she cleaning the corridor?\n｛Toudou＊＊｝ likes\ncleanliness.\nHow amazing.)");
        }
    else if (Parameter_GetCh1Param(10, 326) == 2){
        Parameter_AddCh1Param(10, 326, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Toudou＊＊｝.");
        Character_Chara_GS2(10, "G1_01F", 0);
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(10, 2, (#1), 1);
        Voice_PlayVoice("F1010100_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "You're a guy, so don't go around\ncomplaining!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I-Is she having a fight with a guy?\n｛Toudou＊＊｝ is amazing, as\nexpected...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
