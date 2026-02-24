section "p74_s1_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(What a relief!\nI think it turned out successfully.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P8414000_N00000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Sis! That was really interesting.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Thank you.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8414000_N00100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Hey, I'll wait outside.\nI could use a drink～.");
            SoundEffect_PlayStream(3, "SS_T_00_095_M00");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Honestly...\nHowever, good thing it was success!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I tripped. What a huge mistake!)");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P8414000_N00200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, Yuu-kun...");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(14, 2, (#1));
            Voice_PlayVoice("P8414000_N00300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "It was really a dynamic way to fall.\nI scoffed involuntarily.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yuu-kun～!?");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8414000_N00400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "I-I was just kidding! G-Gotta run.");
            SoundEffect_PlayStream(3, "SS_T_00_095_M00");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Pathetic...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(What a relief!\nI think it turned out successfully.)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P8414000_N00500", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Sis, good job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yuu-kun!?\nYou can't come in here without\npermission.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8414000_N00600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "It's fine, it's fine.\nAside from that, I can easily do\nwhat I decide to.\nYou were so cool!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you.\nBut it'll be bad if everyone finds\nout you're here so, go back quick.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P8414000_N00700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Okaaay. Well then, later!");
            SoundEffect_PlayStream(3, "SS_T_00_095_M00");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Really, Yuu-kun...\nBut good thing it was a success!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I tripped. What a huge mistake!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P8414000_N00800", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Sis, you okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yuu-kun...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(14, 2, (#1));
            Voice_PlayVoice("P8414000_N00900", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Aah, my honey.\nIf you want to cry , I'll lend you\nmy shoulder....\nOr whatever.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah yeah.\nIt'll be bad if people find you in\nhere, so go back.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(14, 3, (#1));
            Voice_PlayVoice("P8414000_N01000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Tsk, you're no fun.\nI came here thinking of comforting\nyou.");
            SoundEffect_PlayStream(3, "SS_T_00_095_M00");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Pathetic...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(What a relief!\nI think it turned out successful.)");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P8414000_N01100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Oh, Sis!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yuu-kun! You came in here, again...");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P8414000_N01200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Well, I waited!\nJust a few words, though.");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8414000_N01300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Sis, umm... You were so beautiful!");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(14, 3, (#1));
            Voice_PlayVoice("P8414000_N01400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "You were the best among the others\nwho played today.\nIt's because I'm saying this and I'm\nsure of it!");
            Character_BlinkStart(14, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8414000_N01500", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "I just wanted to say that! Later!");
            SoundEffect_PlayStream(3, "SS_T_00_095_M00");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Really Yuu-kun...\nI wonder if all of my efforts paid\noff.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I tripped. What a huge mistake!)");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P8414000_N01600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Sis... Are you alright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, Yuu-kun... Yeah, I'm fine.\nJust a sprain, though.");
            Character_BlinkStart(14, 3, (#1));
            Voice_PlayVoice("P8414000_N01700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "No, no, not your ankle.\nI mean the dress.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, I see...");
            Character_BlinkStart(14, 0, (#1));
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8414000_N01800", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Cause the dress Sis made was so\nbeautiful!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8414000_N01900", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "In my opinion, Sis's dress was the\nbest!");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8414000_N02000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Ehehehe...that's all!\nWell then, later!");
            SoundEffect_PlayStream(3, "SS_T_00_095_M00");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Thank you, Yuu-kun...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    }
