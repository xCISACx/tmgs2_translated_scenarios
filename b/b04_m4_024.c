section "b04_m4_024"{
    int var0 = Date_GetDateOption(2, 3);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404024_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Just as I thought, the ship wasn't\nbad.");
        Message_MsgSel("My heart relaxes when I see the ocean.", "The sea breeze feels good.", "Didn't the seashore stink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404024_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "*Sigh*...\nI want to taste that kind of\nfeeling...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 8);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404024_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, I guess. However, this wind...\nOh, not my hair again!\nHow long do you think it took me to\ndo my hair?!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404024_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nThat's obvious because it's the sea,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404024_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Woah～!\nThe sea surface looks so close...");
        Message_MsgSel("You want to go fishing?", "You want to go diving?", "It's scary, like you will get sucked in.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404024_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... It has be the sea.\nIf you really do want to, next time,\nI'll go along with you to\nthe　fishing pond.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay 　impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0404024_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Unbelievable! 　...\nI'm getting goosebumps just by\ndipping my feet into the water...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404024_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No wonder, the sea's a bit scary...\nI totally understand that feeling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404024_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Uh～...\nI feel like I'm getting dizzy...");
        Message_MsgSel("I see, you're sensitive...", "It's trying to pull us back!", "Ah, that's a shame.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404024_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Is that sarcasm? Forget it.\nJust go over there.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404024_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Is that sarcasm? ...\nBut sorry, it's seriously awful...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Are you alright?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404024_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... You think it's lame, don't you?\nJust laugh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm not laughing.\nI never even thought about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, why don't you lie down for a\nbit?\nYou'll feel much better.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404024_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "............");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404024_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nI used to like riding in vehicles\nand stuff, but I'm not that strong.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404024_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "But lately, that hasn't been the\ncase...\nI'm real sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Don't worry, don't worry.\nHey, do you want to rest once we\nreturn to land?\nI'm getting sleepy, too.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404024_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ah.... Thank you.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404024_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I-Idiot!\nThat's unacceptable, so stop it! ...\nBut, thank you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404024_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're merciless, too.\nSince you already know, just zip\nit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
