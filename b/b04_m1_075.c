section "b04_m1_075"{
    int var0 = Date_GetDateOption(2, 22);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401075_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The colors of the fallen leaves have\ncompletely changed....\nIt's fall.");
        Message_MsgSel("The falling leaves are romantic.", "As expected, fall is about sports!", "My appetite grows in fall, as expected.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401075_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I like that crunching sound when you\nstep on them, though...\nWhether it's romantic or not is\nsomething I doubt.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401075_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You say bothersome things.\nIf you've got excess energy, give\nsome to me...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401075_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nYou know you can get fat if you eat\na lot?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401075_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... It's fall, isn't it...");
        Message_MsgSel("You look amazing when you look pensive▼", "Fall comes when summer ends!", "You're thinking about baked yams, right?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401075_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Ah, really. Thanks............");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401075_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah... Who are you trying to be...?\nI'll forgive you because it was\nfunny.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401075_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Do you know the word \"pensive\"?\nAh, but it might be a good idea to\nsell sweet potato desserts at\nSangosho.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401075_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's different to cherry blossoms.\nThe leaves falling from the trees\nhas a sad feeling...");
        Message_MsgSel("And lovelorn feelings too, right?", "You're absorbed in your thoughts.", "Cheer up. Aren't I by your side?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401075_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Who are you supposed to be...?\nBut that may be the sentiments\npeople have in fall.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401075_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah... it really is that way.\nBut when you say that to me, not one\nproper thought comes to my mind.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401075_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "How sad......");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401075_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... But not all the time, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah... That's true.");
                Voice_PlayVoice("B0401075_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "When I spend time with you, I start\nthinking too much about things like\nthe fact that the time I spend with\nyou will be over...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("B0401075_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I sometimes hate myself for thinking\nabout such negative things...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But we're together now, right?");
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401075_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah... we are.\nThat's what I like about you.");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401075_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "......... Just \"that\", okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(You didn't have to emphasize it...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
