section "h4b_m6_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Summer training camp starts today.\nI'll do my best!");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_15F", 0);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("H4B06000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It will be tough in this heat, but\nplease take care of your body.\nLet's do our best!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!\nLet's do our best,\n｛Amachi＊＊｝.");
        Voice_PlayVoice("H4B06000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yes!");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Voice_PlayVoice("H4B06000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, you also have training camp?\nDo your best so that you don't hold\nback the Cheer Squad!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Geez, I know!\nLet's do our best,\n｛Amachi＊＊｝.");
        Character_BlinkStart(6, 3, (#1));
        Voice_PlayVoice("H4B06000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, did you take me seriously?\nIt was a joke!\nLet's both do our best!");
        }
    else {
        Voice_PlayVoice("H4B06000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah...\nI see, you have training camp too.\nWe'll be together for one week.\nLet's both do our best!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!\nLet's do our best,\n｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H4B06000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You're the type to do more than you\nneed to, so try not to be too\nenthusiastic.");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H4B06000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Even if that's not so, it's hot, so\ndon't faint from exhaustion,\nalright?\n... Because I worry about you.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
