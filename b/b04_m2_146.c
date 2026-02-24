section "b04_m2_146"{
    int var0 = Date_GetDateOption(2, 41);
    Background_Bg_GS2("BG_NE270_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_100_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That talk was the best!", "That talk was so-so.", "That talk was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402146_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh... So you like this kinda thing.\nThat's unexpected.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402146_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You weren't scared either?\nWell, this kind of level is\nbearable.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402146_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really? Ah...\nYou mean you didn't find it scary.\nYou're quite resilient.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402146_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's cold.... What is this?");
        Message_MsgSel("Is someone possessed?", "It's surely just a cold.", "Maybe they turned up the air-con here?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402146_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Naive.\nI won't be scared by that kinda\ntrick.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402146_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You're wrong.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402146_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah...\nEven if it's a talk, the air-con\nwould be on....\nIt's too strong.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402146_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Hm? What is it?");
        Message_MsgSel("Eh? W-What??", "Let's go and have tea.", "Wait, who are you talking to!?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402146_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "??? Ah, no...\nIt's nothing..........?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402146_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hm? Yeah... sounds good. Let's go.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402146_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I was talking to you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402146_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Eh, you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? What is it?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402146_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No, you tapped me on the shoulder\njust then, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I didn't.");
                Voice_PlayVoice("B0402146_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Is that so.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402146_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0402146_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... H-Hey.\nWanna go have some tea or something\nat a nice, bright place after this?");
                Message_Who(0);
                Message_MsgDisp("主人公", "R-Right...\nI also wanted to do that...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402146_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Alright. L-Let's hurry up and go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...\nIs he perhaps a little scared?)");
                }
            break ;
            }
        }
    }
