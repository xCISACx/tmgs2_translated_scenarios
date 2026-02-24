section "b08_m8_000"{
    int var0;
    int var1;
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
    Screen_WipeIn(2);
    var0 = Date_GetDateOption(9);
    if ((var0 == 0) || (var0 == 8)){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry for making you drive me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(8, "M8_D?F", 0);
        Voice_PlayVoice("B0808000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You must be tired, so hurry and get\nsome sleep.\nLater.");
        Character_Chara_GS2(8, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Masaki-senpai drove me home.)");
        }
    else if (Parameter_GetCh1Param(var0, 62) < 255){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry for making you drive me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(8, "M8_D?F", 0);
        Voice_PlayVoice("B0808000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You must be tired, so hurry and get\nsome sleep.\nLater.");
        Character_Chara_GS2(8, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Masaki-senpai drove me home.)");
        }
    else if ((Parameter_GetCh1Param(var0, 62) > 254) && (Parameter_GetCh1Param(var0, 62) <= 279)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you very much for driving me\nhome.");
        Voice_PlayVoice("B0808000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah.");
        Message_PauseSkinship();
        SoundEffect_PlaySE(19, 127);
        Character_ChFace(1, 4, 0);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0808000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmm? Your phone is ringing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, will you please wait a moment?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        switch (var0){
            case 1:
            System_Call_GS2("B08", "M1", 10);
            Parameter_InCh1Param(1, 553, 58);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 10);
            Parameter_InCh1Param(2, 553, 58);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 10);
            Parameter_InCh1Param(3, 553, 58);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 10);
            Parameter_InCh1Param(4, 553, 58);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 10);
            Parameter_InCh1Param(5, 553, 58);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 10);
            Parameter_InCh1Param(6, 553, 58);
            break ;
            }
        SoundEffect_PlaySE(20, 127);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0808000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "What's up? Is it an emergency?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? Ah, no... It's nothing.");
        Character_Chara_GS2(8, "M8_D?F", 0);
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0808000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Really? Later.");
        Character_Chara_GS2(8, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        SoundEffect_PlayStream(3, "SS_T_00_057_M00");
        int var2 = Parameter_GetPl1Param(12);
        switch (var2){
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
        switch (var0){
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Saeki＊＊｝ soon...\nPerhaps.)");
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a surprise～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll call ｛Shiba＊＊｝\nlater...)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Hikami＊＊｝ soon...\nPerhaps.)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a surprise～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll call ｛Hariya＊＊｝\nlater...)");
            break ;
            case 5:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Chris＊＊｝ soon...\nmaybe.)");
            break ;
            case 6:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Amachi＊＊｝ soon...\nPerhaps.)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(var0, 62) > 279){
        Message_PauseSkinship();
        Voice_PlayVoice("B0808000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "It's about time we go home.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you very much for driving me\nhome.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        switch (var0){
            case 1:
            System_Call_GS2("B08", "M1", 11);
            Parameter_InCh1Param(1, 554, 59);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 11);
            Parameter_InCh1Param(2, 554, 59);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 11);
            Parameter_InCh1Param(3, 554, 59);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 11);
            Parameter_InCh1Param(4, 554, 59);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 11);
            Parameter_InCh1Param(5, 554, 59);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 11);
            Parameter_InCh1Param(6, 554, 59);
            break ;
            }
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0808000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "...\nThere was something kinda strange\nabout that guy.\nIs it okay to not chase after him?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yes... I think it will be fine.");
        Character_Chara_GS2(8, "M8_D?F", 0);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("B0808000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Then that's fine. Later.");
        Character_Chara_GS2(8, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        switch (var0){
            case 1:
            System_Call_GS2("B08", "M1", 1);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 1);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 1);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 1);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 1);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 1);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
