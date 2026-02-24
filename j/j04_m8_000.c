section "j04_m8_000"{
    int var0 = Parameter_Get_Afterscholl();
    if (var0 == 2){
        Parameter_AddCh1Param(8, 86, 1);
        if (Parameter_GetCh1Param(8, 130) == 3){
            Character_Chara_GS2(8, "M8_01F", 0);
            Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_08_001_D00", 127, 40);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("", 8, "J0408001_H00000");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.\nYou got a sec?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, what is it?");
            Voice_PlayVoice("J0408001_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Do you have any plans for this\nSunday?");
            Message_MsgSel("Nothing in particular.", "I kind of have something to do...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M8", 0);
                System_Call_GS2("J06", "M8", 0);
                break ;
                case 1:
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("J0408001_H00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I see.\nIt's fine then, I'll ask you another\ntime.\nMake yourself free next time!");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Next Sunday, huh...\nI wonder if something is happening\nthen?)");
                Parameter_AddCh1Param(8, 60, #5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(8, 130) > 3){
            Character_Chara_GS2(8, "M8_01F", 0);
            Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_08_001_D00", 127, 40);
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Masaki＊＊｝?\nWhat is the matter?");
            Voice_PlayVoice("J0408000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah... You...\ngot any plans for this Sunday?");
            Message_MsgSel("Nothing in particular.", "I kind of have something to do...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M8", 0);
                System_Call_GS2("J06", "M8", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("J0408000_H00100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I see...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is there something happening on\nSunday?");
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("J0408000_H00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Ah, no! It's nothing, really!\nHaha, next time, then! Hahaha...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(8, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Masaki＊＊｝...\nDid he need something from me?)");
                Parameter_AddCh1Param(8, 60, #5);
                break ;
                }
            }
        }
    else {
        int var1 = Parameter_GetPl1Param(12);
        switch (var1){
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
        if (Parameter_GetCh1Param(8, 130) == 3){
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0408001_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah. It's me, Masaki.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, Masaki-senpai.\nWhat's the matter?");
            Voice_PlayVoice("J0408001_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Umm, you got plans for this Sunday?");
            Message_MsgSel("Nothing in particular.", "I kind of have something to do...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M8", 10);
                System_Call_GS2("J06", "M8", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0408001_H00500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "What, is that so? Then it's nothing.\nMy bad for calling you outta the\nblue.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Next Sunday, huh...\nIs there something happening then?)");
                Parameter_AddCh1Param(8, 60, #5);
                break ;
                }
            }
        else if (Parameter_GetCh1Param(8, 130) > 3){
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It's Masaki.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Masaki＊＊｝?\nWhat is the matter?");
            Voice_PlayVoice("J0408000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah... I kinda got something to ask.\nWhat's your schedule like this\nSunday?");
            Message_MsgSel("There's nothing in particular.", "I kind of have something to do...");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M8", 10);
                System_Call_GS2("J06", "M8", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0408000_H00500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? ｛Masaki＊＊｝?");
                Voice_PlayVoice("J0408000_H00600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Ah? O-Oh, my bad.\nSorry for calling you outta the blue\nand asking about something weird.");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's fine...\nRather, is there something happening\non Sunday?");
                Voice_PlayVoice("J0408000_H00700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Well there is and there isn't～...\nAh, no. It's nothing. It's fine.");
                Voice_PlayVoice("J0408000_H00800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "So, later...");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Masaki＊＊｝'s voice got\nmore deflated...\nWas it something important?)");
                Parameter_AddCh1Param(8, 60, #5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
