section "b04_m4_145"{
    int var0 = Date_GetDateOption(2, 40);
    Background_Bg_GS2("BG_NE260_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404145_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See!?\nI was told that visual-kei's all\nappearance, but their songs were\ngood too!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404145_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm, is that so?\nI thought it was a really good live.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404145_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You... Did you really listen to it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404145_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I don't hate that kind of flashy\nappearance...");
        Message_MsgSel("Just don't wear that on a date.", "It'll surely suit you.", "Do you like that kind of make-up?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404145_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Those kind of clothes are for lives!\nNo matter what, don't even dare to\nwear that outside.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404145_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Of course! What, want to see?\nLet's try that for the next live!");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404145_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No interest in make-up, why,\nbecause, I prefer the natural.");
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
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404145_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Your view about the live today,\nwhich songs did you like?");
        Message_MsgSel("The sad love ballad.", "Flashy up-beat number.", "I didn't like any.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404145_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You couldn't hear the voice of the\nvocalist because of the sound of the\nguitar.\nNot quite one for me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404145_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Which part of that song did you\nlike?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Maybe the lyrics...\nIt was so sad, I was about to cry\nhalfway...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404145_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nSomething like it, if you've truly\nnot fallen in love with it, you\ncan't write it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see.\nWell, the person who wrote those\nwords, was in the middle of having\nan unrequited love.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404145_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...I can probably even write it at\nthis moment..");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404145_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'll let you hear it once I'm done.\nYou're going to cry really hard for\nsure.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404145_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That song was pretty good!\nThe moment the guitar cutting had\nbegun, goosebumps were all over my\nbody!");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404145_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Seriously!?\nWell, it can't be helped since it's\nabout interests.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
