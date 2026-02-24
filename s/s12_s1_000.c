section "s12_s1_000"{
    Character_Chara_GS2(14, "S1_04F", 0);
    Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(338) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Let's set a new goal this year.");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S1214000_N00000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "What goal would you be able to\ntarget?");
        Message_Who(0);
        Message_MsgDisp("主人公", "......\nWhat is that supposed to mean?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S1214000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "I-It's a joke.\nYou don't have to look so scary\nSis～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how the new year started.)");
        }
    else if (Parameter_GetPl1Param(338) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "It's a new year...\nTime passed by really fast.");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(14, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S1214000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "It does feel like time passed by\nreally fast.\nI will be a good man in a blink of\nan eye and Sis...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sis... what?");
        Character_BlinkStart(14, 0, (#1));
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S1214000_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "N-Nothing. No, nevermind.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how the new year started.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "I'll graduate from the academy this\nyear...");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(14, 2, (#1));
        Voice_PlayVoice("S1214000_N00400", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "I'll graduate, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "You're right.\nYuu-kun will be a sixth grader.");
        Character_ChFace(0, 3, 2);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S1214000_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Yep. It finally feels that way....\nI...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Did you want to become a junior high\nstudent sooner?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S1214000_N00600", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "I don't like the satchels.\nWearing things like that makes me\nfeel like a kid.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how the new year started.)");
        }
    Music_StopBGM(0, 40);
    Parameter_AddCh1Param(14, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
