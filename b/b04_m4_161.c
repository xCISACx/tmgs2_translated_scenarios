section "b04_m4_161"{
    int var0 = Date_GetDateOption(2, 45);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404161_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, what should we do?");
        Message_MsgSel("Let's check our compatibility!", "There's a stuffed toy that I want.", "As expected, fighting games!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404161_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What does a machine know? I'll pass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404161_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's annoying once you can't get\none...\nWell, let's try that!");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404161_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Woah!\nA clear win or lose game is easy yet\nfun.");
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
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404161_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ooh!\nI'm a guy who pays a visit to the\ngame arcade from morning til\nnight...");
        Message_MsgSel("You really do love games.", "I'm surprised that you're so good.", "Is there something else we could try?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404161_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I guess.\nYou're happy once you're into the\nthing you like!");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404161_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It took a lot of time and money to\nget this far.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404161_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's just a game.\nWhy can't I get addicted to other\ngames?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404161_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey...\nAre you skilled at playing fighting\ngames?");
        Message_MsgSel("Just pressing the buttons repeatedly.", "Will you go easy on me?", "Just a bit of technique.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404161_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "And with 8 straight wins. Amazing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404161_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What was that?\nWon't you lose your friends if you\nsay it like that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404161_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... You... You're making fun of me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Voice_PlayVoice("B0404161_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Listen! Never go easy!");
                Voice_PlayVoice("B0404161_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You asked me to challenge you to a\nfight!");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404161_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You don't know what's going to\nhappen once my fighting spirit is\nunleashed...\nExperience it fully!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404161_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oooh. That technique, teach me!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
