section "j04_m7_010"{
    if (Parameter_ChkHoliday(2) == 0){
        Character_Chara_GS2(7, "M7_01F", 0);
        Environment_PlayME(1, "SN_P_00_026_000", 127, 0);
        Background_Bg_GS2("BG_SC301_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("J0407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Umm. Listen up, everyone.");
        Environment_StopME(1, 40);
        Voice_PlayVoice("J0407000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I am thinking of holding an extra-\ncurricular class next Sunday.\nHow does that sound?");
        Voice_PlayVoice("J0407000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "People who are free should\nparticipate.\nIt would be sad for me to go by\nmyself.");
        SoundEffect_PlayStream(2, "EV_SE_GAYA_017");
        System_Call_GS2("J06", "M7", 1);
        }
    else {
        int var0 = Parameter_GetPl1Param(12);
        switch (var0){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello.");
        Voice_PlayVoice("J0407000_G01000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It is Wakaouji.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nWhat is the matter?");
        Voice_PlayVoice("J0407000_G01100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I am thinking of holding an extra-\ncurricular class next Sunday.");
        Voice_PlayVoice("J0407000_G01200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Umm, there are only a few people who\nwill be attending so far, so if you\ncame, it would be of great help.");
        Message_MsgSel("Okay, I will join!", "I have something to do...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("J0607010_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thank gosh.\nThen I will see you next Sunday.\nLet's try our best to not be late.");
            Voice_PlayVoice("J0607010_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I will hang up now.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday, huh...\nI must make sure that I don't sleep\nin.)");
            Date_SetNextSandayDateEvent(7);
            break ;
            case 1:
            Voice_PlayVoice("J0407000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I've been turned down again...\nYou make the 3rd person to turn me\ndown.\n*sigh*... I will hang up now.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next Sunday, huh...\nI wonder if I should have agreed to\njoin.)");
            Parameter_AddCh1Param(7, 60, #5);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
