section "b04_m4_236"{
    int var0 = Date_GetDateOption(2, 72);
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(4, 61, 3);
        Parameter_AddCh1Param(4, 60, 2);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(4, 61, 0);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #2);
        Parameter_AddCh1Param(4, 62, 2);
        }
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Character_ChFace(0, 0, 10);
    Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0404236_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's so lively!\nWherever you look, it's sparkling.");
        Message_MsgSel("It's like they came from a jewel box!", "I want to watch it forever...", "Let's dance together▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404236_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You call those lights sparkling?\nAren't you mistaken on how you\ncompared it?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404236_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah...\nYou'd forget how time has passed\njust doing this.\nIt's nice, once in a while.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404236_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I want to watch the parade.\nIf you wish to dance, do it alone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404236_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Those steps are awesome!\nIt must be fun if you do a dance\nthat much.");
        Message_MsgSel("You can do it, ｛Hariya＊＊｝.", "Would you like to join in?", "There's no need for a musician to dance!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404236_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Duh, if you train your body\nfrequently, it'll be a breeze to\nmaster if you put your mind to it.\nMaybe I should try to do it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404236_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ugh...\nto have said something like that...\nYou do have the courage.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404236_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nThere are musicians who'd dance\nduring lives, you know?\nI'm saying, don't label.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404236_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Once the night parade ends, so does\nthe fun.");
        Message_MsgSel("I still don't want to go home...", "We made a memorable experience.", "I got tired today.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404236_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Me too...\nI wish they could stretch the\nclosing time longer.\nAbout... around 24 hours.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404236_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I had loads of fun!\nI want to come again～");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0404236_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... What's that, all of a sudden?\nDon't you have any other ideas?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0404236_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I guess, you're right.\nWe did have lots of fun.\nFrom morning until evening!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nI'd want to walk around the\namusement park corner by corner.");
                Voice_PlayVoice("B0404236_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey! Well then, let's get going.\nWe'll be having a field trip before\nreaching home.\nDon't lose your grip.");
                Message_Who(0);
                Message_MsgDisp("主人公", "The field trip brought a lot of\nmemories.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404236_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Right?\nOh, if ever you get sleepy inside\nthe bus on our way back, just snooze\noff.");
                Message_Who(0);
                Message_MsgDisp("主人公", "And you, ｛Hariya＊＊｝?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404236_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Don't worry about me....\nI want to look at you sleep.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404236_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Just leave it to me!\nHey, we're going home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
