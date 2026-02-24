section "p84_m1_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            SoundEffect_PlayStream(3, "SS_DSE_052_000");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Here, 15 copies. Are these okay?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. You're like an office lady.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hehe, really?\nI might find a job tomorrow, even if\nit's just photocopying!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7401000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What's that...?\nAnyway, I should order something for\nyou to do today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝ praised me!)");
            SoundEffect_StopStream(3, 40);
            }
        else {
            SoundEffect_PlayStream(3, "SS_DSE_052_000");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "H-Huh? I'm sure if I push this...");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_T_00_069_M00");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah! It's broken, again!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Nope, looks like it's just out of\npaper.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Ah, that's true!\nEh, the paper is...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's that pack over there, isn't it?\n... Should I help?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* Big mistake...)");
            SoundEffect_StopStream(2, 40);
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for waiting!\nYou're just in time, we just had to\nreplenish it.\nLucky you, huh?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7401000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Heh... Nice preparations.\nWhat you're doing today makes you\nseem like an able woman.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝ praised me!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝, umm...");
            Voice_PlayVoice("P7401000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... What's a power tap, again?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7401000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* Big mistake...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh*... That settled it somehow.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("P7401000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you a negotiator? You're good.\nYou did great.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well, I must admit...\nIt was like this throughout the\nwhole day.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7401000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ooh...\nSo, you appear to be a negotiator.\nI love that.");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝ loved it...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh*...\nI managed to get them to compromise,\nright?");
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("P7401000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, yeah.\nBut wasn't I the one who intervened\nand got hit three times?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I failed...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
