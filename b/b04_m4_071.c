section "b04_m4_071"{
    int var0 = Date_GetDateOption(2, 18);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404071_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's completely hot～.\nAnd I'm having stingy sunburns all\nover...");
        Message_MsgSel("The water surface is shining like a gem!", "I want to shower under the fountain.", "I hate the heat, and these kinds of days...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404071_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That way, the sun will hit you with\nmultiple sunburns and your skin will\nwrinkle out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404071_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's great! ...\nBut I definitely don't wanna take a\nshower from its waters.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404071_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right.\nLet's go to a place where it's\nair-conditioned...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404071_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The sun's rays are too harsh, it\nreally is Summer!");
        Message_MsgSel("Are you that happy...?", "｛Hariya＊＊｝, you're glowing.", "Let's find shelter in the shade.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0404071_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "W-When was I happy?\nI'm saying I'm not happy in\nparticular!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404071_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then I'll soak in those waters and\nit'll turn me into a splendidly\nhandsome great guy, without a doubt.\nHahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404071_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If that offer permits.\nWell, we'll take action at once!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404071_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Huh...\nThere are coins inside the\nfountain...\nWanna make a wish?");
        Message_MsgSel("Lost items must be carried to the police.", "Hope everyone's wishes are granted.", "Let's do that, too!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404071_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nWell they're clearly not lost items.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404071_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I guess.\nEveryone's wishes are gathered here\nfor just a number of coins.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404071_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You're serious～...\nI'm just going to watch, you do it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404071_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Seriously～...\nOkay then, let's throw a coin on\nthree.\nReady...");
                SoundEffect_PlayStream(3, "SS_DSE_169_000");
                Message_Who(0);
                Message_MsgDisp("主人公", "......\n｛Hariya＊＊｝, what did you\nwish for?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0404071_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Not telling.\nIf I told you what I wished for, it\nwon't come true, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "But I'm curious!");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404071_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... About my future.\nAn oath to be famous and also, to be\nwith you forever.");
                Message_Who(0);
                Message_MsgDisp("主人公", "With me?");
                Character_BlinkStart(4, 0, (#1));
                Voice_PlayVoice("B0404071_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Nothing!\nI wished for the waters to flow\nstronger!");
                Message_Who(0);
                Message_MsgDisp("主人公", "If you say it, it won't come true,\nright?");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404071_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... That's fine! Argh, really, next!\nNext!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Environment_StopME(1, 40);
    System_Wait(60);
    }
