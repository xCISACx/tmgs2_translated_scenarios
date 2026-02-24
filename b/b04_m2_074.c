section "b04_m2_074"{
    int var0 = Date_GetDateOption(2, 21);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(2, 3, (#1));
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402074_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The sunlight is strong.\nIt really does feel like summer.");
        Message_MsgSel("It's a shower of sunlight!", "I don't like summer...", "It seems cooler in the shade of the trees.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0402074_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "If you continue frolicking out\nthere, you'll get a heat stroke.\nBe careful.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402074_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really? I... don't feel that way.\nWell, everyone is different.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402074_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right. Let's take a little break.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402074_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There are few people....\nIs it because it's hot?");
        Message_MsgSel("It feels nice, like it was reserved for us.", "The two of us, walking along the hot avenue▼", "Let's look for an ice-cream store!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402074_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well...\nIt's nice not seeing sweaty people.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0402074_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Huh? If you don't like it, tell me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402074_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Good idea. What flavor do you like?\nI like... soda flavor.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402074_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey, what do you imagine when you\nhear the word \"summer\"?");
        Message_MsgSel("Insect bites～!", "Fireworks... maybe?", "Ghosts, ghost stories, the season of horror▼");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402074_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... What a... disgusting reply......\nthat was.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402074_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "See, look, even now there's a\nmosquito...\n*Smack*");
                SoundEffect_PlayStream(3, "SS_T_00_194_M00");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402074_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, I missed it. Ugh...\nMy arms are itchy～...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402074_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Gimme your hand.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ehh!? His tongue...!)");
                Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402074_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "There.");
                Message_Who(0);
                Message_MsgDisp("主人公", "T-Thanks... Uhh...\nDoes that work on insect bites?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402074_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I wonder.\nIt would surely sterilize it, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nI've never heard of that before...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402074_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Me too.\nWhen you think of \"Summer\", you\nthink fireworks.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402074_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh... You like that kinda thing?\nThat's unexpected.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
