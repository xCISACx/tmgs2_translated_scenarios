section "p54_s1_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(14, "S1_04F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "How was the display?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P5414000_N00000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "...\nIt was much better than I thought.\nI had to give it a teeny weeny\nsecond thought.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was able to paint pretty well.\nAll of that effort paid off if I do\nsay so myself?)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(14, "S1_04F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "H-How was it...?");
            Character_BlinkStart(14, 3, (#1));
            Voice_PlayVoice("P5414000_N00100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Well, it's Sis-like.\nThe places where the lines appear\nshaky looks like you were scared of\ndrawing it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh! ...\nHowever, I don't have a response to\nthat...)");
            Character_BlinkStart(14, 2, (#1));
            Voice_PlayVoice("P5414000_N00200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "On that subject, the person who\nmodeled it was carried to the school\ninfirmary a while ago.\nWhy would she faint over that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Himeko-senpai!? ...\nUgh, now what should I do.\nI should have done it more\nseriously!)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(14, "S1_04F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5414000_N00300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Amazing. It was a beautiful mermaid!\nAnd you did it～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you! Everyone is pleased.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth doing my best!!)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(14, "S1_04F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5414000_N00400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Hey, hey!\nDid that explosive performance make\nthe mermaid become a bubble?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P5414000_N00500", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Whose great sense was that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nNothing good came out of that.\nI should have taken the club\nactivities more seriously...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(14, "S1_04F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5414000_N00600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Did Sis depict this, too?");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's right. Isn't it amazing?");
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5414000_N00700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Yeah, it really is amazing!\nThe first time I saw this I thought\nit was huge or something like that!");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's a masterpiece that was drawn by\neveryone really late in the school.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5414000_N00800", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Is that so! I-I respect that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, it was really worth doing the\nbest we could.)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(14, "S1_04F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5414000_N00900", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "... Was this discovered somewhere?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Discovered?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5414000_N01000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Is this a picture some ancient\nperson depicted?\nIt looks like something I saw in a\nhistory textbook.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(14, 3, (#1));
            Voice_PlayVoice("P5414000_N01100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "No, this was depicted by a primitive\nperson, like a child.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Errr, Yuu-kun.\nThat's the mural we all painted\ntogether...");
            Character_BlinkStart(14, 0, (#1));
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5414000_N01200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "I can't believe my eyes!\nA 21st century person painting such\na simple painting...");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P5414000_N01300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Aaaah, I'm kidding! Just kidding!\nI think it's nice to have some\ncourage!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\n*Sigh* I should have tried\nharder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    }
