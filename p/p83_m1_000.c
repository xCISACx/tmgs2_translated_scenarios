section "p83_m1_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "10 copies, take it～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* We're busier than usual\nduring the Culture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝! What's up?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7301000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got requested by Wakaouji-sensei to\nmake copies.\nHe said they're flyers for the shop.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, okay!\nCan you wait for a moment?");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "10 copies, take it～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* We're busier than usual\nduring the Culture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("", 1, "P7301000_A00100");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.\nYou look busy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝! What's up?");
            Voice_PlayVoice("P7301000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Wakaouji-sensei was in a hurry.\nHe said that we're lacking flyers.");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7301000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Can you make copies?\nI thought that you'd know.\nI'm also passing by to have a look\non the matter.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Let me see... Yeah.\nCan wait for a moment?");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've collected the drills!\nThe additional pamphlets will arrive\nfrom the print shop in one hour～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew* I didn't think being in\ncharge of materials would be this\ntough...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝!\nIs something wrong?");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P7301000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Wakaouji-sensei...\nHe said we lack power taps.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Power taps, was it?\nCould you wait for a moment...");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've collected the drills!\nThe additional pamphlets will arrive\nfrom the print shop in one hour～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew* I didn't think being in\ncharge of materials would be this\ntough...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("P7301000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Wakaouji-sensei was down because we\nstruggled to get power taps and was\nunsuccessful--");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("P7301000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I thought that you would know.\nAnd I'm just passing by to show a\nface...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Power taps, was it?\nCould you wait for a moment...");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～* I was asked to be in charge\nof the floor, so I've got lots of\nthings to do...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!\nWhat's up?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7301000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm helping someone I know from a\nband, there's been trouble with the\nband contest.\nSeemed like it was explosive.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh!? I have to go!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7301000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, so you really have to?");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "Be thorough in the hygiene\ninspection of food-related places.\nAlso, watch out for signs sticking\nout in the corridors.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew～* I was asked to be in charge\nof the floor, so I've got lots of\nthings to do...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!\nWhat's up?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7301000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm helping someone I know from a\nband.\nThere's been trouble with the band\ncontest.\nSeemed like it was explosive.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What!?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7301000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I thought of leaving it alone, but\nit felt interesting.\nYou can be blamed later, so it\ndoesn't seem important right now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I have to go!");
            Voice_PlayVoice("P7301000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, okay, I guess, me too.");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P84", "M1", 0);
    }
