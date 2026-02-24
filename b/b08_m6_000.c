section "b08_m6_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    var0 = System_GlobalWork(0, 1);
    var1 = Parameter_GetPl1Param(312);
    var4 = Date_GetDateOption(9);
    if (var0 == 1){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
        Background_Bg_GS2("BG_HO000_?_1", 1, #1, 0);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0806000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I will take my leave.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for walking me all the way\nhome, ｛Amachi＊＊｝...");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            }
        else {
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0806000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm going home now.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for walking me all the way\nhome, ｛Amachi＊＊｝...");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            }
        switch (var1){
            case 1:
            System_Call_GS2("B50", "M1", 0);
            break ;
            case 2:
            System_Call_GS2("B50", "M2", 0);
            break ;
            case 3:
            System_Call_GS2("B50", "M3", 0);
            break ;
            case 4:
            System_Call_GS2("B50", "M4", 0);
            break ;
            case 5:
            System_Call_GS2("B50", "M5", 0);
            break ;
            case 7:
            System_Call_GS2("B50", "M7", 0);
            break ;
            case 8:
            System_Call_GS2("B50", "M8", 0);
            break ;
            }
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0806000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "U-Umm, what exactly did that\nperson...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nThank you for walking me all the way\nhome.\nI will see you later.");
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0806000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, yes... Excuse me.");
            Character_Chara_GS2(6, "NON");
            }
        else {
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0806000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Hey, Senpai. What was that?\nIs it okay to not go after him?");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nThank you for walking me all the way\nhome.\nI will see you later.");
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0806000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Later.");
            Character_Chara_GS2(6, "NON");
            }
        switch (var1){
            case 1:
            System_Call_GS2("B50", "M1", 1);
            break ;
            case 2:
            System_Call_GS2("B50", "M2", 1);
            break ;
            case 3:
            System_Call_GS2("B50", "M3", 1);
            break ;
            case 4:
            System_Call_GS2("B50", "M4", 1);
            break ;
            case 5:
            System_Call_GS2("B50", "M5", 1);
            break ;
            case 7:
            System_Call_GS2("B50", "M7", 1);
            break ;
            case 8:
            System_Call_GS2("B50", "M8", 1);
            break ;
            }
        }
    else if ((var4 == 0) || (var4 == 6)){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
        Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for walking me home.");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0806000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please do not worry about it.\nI will take my leave here.");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ walked me all\nthe way home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for walking me home.");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("B0806000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You're welcome!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0806000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm leaving now, Senpai. Later!");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ walked me all\nthe way home.)");
            }
        }
    else if (Parameter_GetCh1Param(var4, 62) < 255){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
        Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for walking me home.");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0806000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please do not worry about it.\nI will take my leave here.");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ walked me all\nthe way home.)");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks for walking me home.");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("B0806000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You're welcome!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0806000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm leaving now, Senpai. Later!");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ walked me all\nthe way home.)");
            }
        }
    else if ((Parameter_GetCh1Param(var4, 62) > 254) && (Parameter_GetCh1Param(var4, 62) <= 279)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
            Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0806000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I will take my leave.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for walking me all the way\nhome, ｛Amachi＊＊｝...");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, wait a second.");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            switch (var4){
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
                }
            SoundEffect_PlaySE(20, 127);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0806000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is there some kind of trouble?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, it's not that. It's fine.");
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0806000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so...? That is fine, then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nThank you for walking me all the way\nhome.\nI will see you later.");
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0806000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, excuse me.");
            Character_Chara_GS2(6, "NON");
            Message_CloseMsg();
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0806000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm going home now.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for walking me all the way\nhome, ｛Amachi＊＊｝...");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            SoundEffect_PlaySE(19, 127);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, wait a second.");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            switch (var4){
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
                }
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0806000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Something wrong?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, nothing.\nIt's fine, so don't worry, okay?");
            Voice_PlayVoice("B0806000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Hmm～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nThank you for walking me all the way\nhome.\nI will see you later.");
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0806000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay, later.");
            Character_Chara_GS2(6, "NON");
            Message_CloseMsg();
            }
        Screen_WipeOut(2);
        Screen_ClearScreen();
        SoundEffect_PlayStream(3, "SS_T_00_057_M00");
        int var6 = Parameter_GetPl1Param(12);
        switch (var6){
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
        switch (var4){
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising.)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Saeki＊＊｝ soon...)");
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a surprise...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll call ｛Shiba＊＊｝\nlater...)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Hikami＊＊｝ soon...)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a surprise...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll call ｛Hariya＊＊｝\nlater...)");
            break ;
            case 5:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising.)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Chris＊＊｝ soon...)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(var4, 62) > 279){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0806000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I will take my leave.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for walking me all they\nway home, ｛Amachi＊＊｝...");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            switch (var4){
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
                }
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0806000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "U-Umm, what exactly did that\nperson...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nThank you for walking me all the way\nhome.\nI will see you later.");
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0806000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, yes... Excuse me.");
            Character_Chara_GS2(6, "NON");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            switch (var4){
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
                }
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0806000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm going home now.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for walking me all the way\nhome, ｛Amachi＊＊｝...");
            Message_SkinshipSet(0);
            Message_PauseSkinship();
            switch (var4){
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
                }
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0806000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Hey, Senpai. What was that?\nIs it okay to not go after him?");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nThank you for walking me all the way\nhome.\nI will see you later.");
            Character_Chara_GS2(6, "M6_D?F", 0);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0806000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Later.");
            Character_Chara_GS2(6, "NON");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            switch (var4){
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
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
