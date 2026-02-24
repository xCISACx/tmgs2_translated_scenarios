section "j04_m4_000"{
    int var0 = System_Randam(0, 4);
    if (Parameter_ChkHoliday(2) == 0){
        Character_Chara_GS2(4, "M4_01F", 0);
        if (var0 == 0){
            Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
            }
        else if (var0 == 1){
            Background_Bg_GS2("BG_SC220_?_0", 1, #1, 0);
            }
        else if (var0 == 2){
            Background_Bg_GS2("BG_SC202_?_0", 1, #1, 0);
            }
        else if (var0 == 3){
            Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
            }
        else if (var0 == 4){
            Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
            }
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_04_003_D01", 127, 40);
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Voice_PlayVoice("J0404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo. You got a minute?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yo, ｛Hariya＊＊｝.\nWhat's up?");
            Voice_PlayVoice("J0404000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Are you free this Sunday?");
            Message_MsgSel("Yeah, I am.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M4", 0);
                System_Call_GS2("J06", "M4", 0);
                break ;
                case 1:
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("J0404000_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You serious!?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("J0404000_D00300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You got something to do that is more\nimportant than me...");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("J0404000_D00400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "No, ignore this incident!");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("J0404000_D00500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'll ask you out again, so make\nyourself free then!\n... Okay?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("J0404000_D00600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... *Sigh* ......");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(4, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(4, 60, #5);
                Parameter_AddCh1Param(4, 62, 5);
                break ;
                }
            }
        Parameter_AddCh1Param(4, 86, 1);
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
        if (Parameter_GetCh1Param(4, 130) >= 4){
            SoundEffect_PlaySE(19, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Huh? Who is calling me?)");
            SoundEffect_StopSE(19, 0);
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello.");
            Voice_PlayVoice("J0404000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝. Yo.\nWhat's up?");
            Voice_PlayVoice("J0404000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Are you free this Sunday...?\nYou're free, right?");
            Message_MsgSel("Yeah, I'm free.", "Sorry, I kind of have something to do.");
            switch (Message_TextSelect()){
                case 0:
                System_Call_GS2("J05", "M4", 10);
                System_Call_GS2("J06", "M4", 10);
                break ;
                case 1:
                Voice_PlayVoice("J0404000_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You serious... I'm outta luck...");
                Voice_PlayVoice("J0404000_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey, so then......\nNah, I shouldn't ask...\nIt's nothing...");
                Voice_PlayVoice("J0404000_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nClear your schedule for me next\ntime.\nLater...");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(This Sunday, huh...\nI wonder if he needed something from\nme?)");
                Parameter_AddCh1Param(4, 60, #5);
                Parameter_AddCh1Param(4, 62, 5);
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
