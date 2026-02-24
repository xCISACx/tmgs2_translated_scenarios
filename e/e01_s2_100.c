section "e01_s2_100"{
    Background_Bg_GS2("BG_EX100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Date_GetDateOption(3) == 6){
        Character_Chara_GS2(15, "S2_18F", 0);
        Music_PlayBGM(0, "MN_C_15_000_D00", 127, 40);
        Voice_PlayVoice("E0115100_O00000", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "The sensitive to cold Daisy!");
        Message_Who(0);
        Message_MsgDisp("主人公", "!? Ah, Himeko-senpai!");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_01F", 0);
        Voice_PlayVoice("E0115100_O00100", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Aren't you overlooking something?\nEven though it's warm, why are you\nwearing such thick clothes?");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_19F", 0);
        Voice_PlayVoice("E0115100_O00200", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "A maiden's skin is her attractive\npoint.\nYou must be more daring!\nSee you later, ciao!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(15, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Seasonal attire, huh...\nPerhaps I should be more aware of\nit?)");
        }
    else if (Date_GetDateOption(3) == 7){
        Character_Chara_GS2(15, "S2_18F", 0);
        Music_PlayBGM(0, "MN_C_15_000_D00", 127, 40);
        Voice_PlayVoice("E0115100_O00300", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Daisy, you strong girl!");
        Message_Who(0);
        Message_MsgDisp("主人公", "!? Ah, Himeko-senpai!");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_17F", 0);
        Voice_PlayVoice("E0115100_O00400", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Aren't you overlooking something?\nWhy wear that in such cold weather?\nThe cold is the enemy of maidens,\nright!?");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_19F", 0);
        Voice_PlayVoice("E0115100_O00500", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Angora wool and cashmere fur.\nYou must wear warmer clothing!\nSee you later, ciao!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(15, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Seasonal attire, huh...\nPerhaps I should be more aware of\nit?)");
        }
    else if ((Date_GetDateOption(3) == 10) || (Date_GetDateOption(3) == 11) || (Date_GetDateOption(3) == 12)){
        Character_Chara_GS2(15, "S2_01F", 0);
        Music_PlayBGM(0, "MN_C_15_000_D00", 127, 40);
        Voice_PlayVoice("E0115100_O00600", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "A fashionable Daisy!");
        Message_Who(0);
        Message_MsgDisp("主人公", "!? Ah, Himeko-senpai?");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_19F", 0);
        Voice_PlayVoice("E0115100_O00700", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Wonderful, Daisy!\nYou're well attuned to trends!");
        if (Date_GetDateOption(3) == 10){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you mean this\n｛流行服名｝?");
            }
        else if (Date_GetDateOption(3) == 12){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you mean this\n｛流行アクセサリ名｝?");
            }
        else if (Date_GetDateOption(3) == 11){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you mean the color of my clothes?");
            }
        Voice_PlayVoice("E0115100_O00800", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Yes.\nContinue to check \"Himeko's Room\",\nokay?\nCiao!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(15, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I was complimented by\nHimeko-senpai!)");
        }
    else if (Date_GetDateOption(3) == 8){
        Character_Chara_GS2(15, "S2_17F", 0);
        Music_PlayBGM(0, "MN_C_15_000_D00", 127, 40);
        Voice_PlayVoice("E0115100_O00900", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Daisy, you fool!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehh!? Ah, Himeko-senpai!");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_01F", 0);
        Voice_PlayVoice("E0115100_O01000", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Aren't you overlooking something?\nWhat exactly did you intend to do in\nsuch clothing?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm... Right...");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_18F", 0);
        Voice_PlayVoice("E0115100_O01100", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Yes, right!\nDo you really want to seek attention\nthat badly?");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_17F", 0);
        Voice_PlayVoice("E0115100_O01200", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Daisy... You scary girl.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(15, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Maybe I should have thought more\nabout this clothing...)");
        }
    else {
        Character_Chara_GS2(15, "S2_17F", 0);
        Music_PlayBGM(0, "MN_C_15_000_D00", 127, 40);
        Voice_PlayVoice("E0115100_O01300", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Daisy, you lazy person!");
        Message_Who(0);
        Message_MsgDisp("主人公", "!? Ah, Himeko-senpai.");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_18F", 0);
        Voice_PlayVoice("E0115100_O01400", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "No, no, that is no good!\nIt doesn't convey Daisy's appeal!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, do you mean these clothes?");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_01F", 0);
        Voice_PlayVoice("E0115100_O01500", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Exactly!\nFashion is the energy of maidens!\nYou like being fashionable, right?\nAm I wrong?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yes, I do...");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_17F", 0);
        Voice_PlayVoice("E0115100_O01600", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Then you should hurry back home and\ncheck \"Himeko's Room\"!\nOkay?\n*Pout*");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(15, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Fashionable, huh...\nWell it certainly would be better if\nI thought about it a bit more...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(15, 86, 1);
    }
