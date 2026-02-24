section "s09_m2_000"{
    int var0;
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_??F", 0);
    Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Voice_PlayVoice("S0902000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Fortunes...\nYou want to pull one?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm～, should I?");
        Message_MsgSel("Yeah, I'll pull one.", "I'll pass...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0902000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then I'll come with you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder why my heart is beating so\nhard?)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S0902000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Got it. Well, let's go...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was he perhaps looking forward to\nit?\nIt feels like I did something\nbad...)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Voice_PlayVoice("S0902000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I pull one every once in a while...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("S0902000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Fortunes. Do you want to?");
        Message_MsgSel("Yeah, I'll take on the challenge!", "Umm, it's a little...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0902000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nAre you gonna try to make it right\ncause you know it'll be bad?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, my heart is pounding...)");
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0902000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWell, I pull every New Year except\nthis one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have pulled a\nfortune, after all?)");
            var0 = 1;
            break ;
            }
        }
    else {
        Voice_PlayVoice("S0902000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Fortunes... Do you want to pull?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Should I...?");
        Message_MsgSel("Okay, I'll try!", "Ah, not interested.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0902000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S0902000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "............");
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("S0902000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'll pull.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder why\n｛Shiba＊＊｝'s so serious\nabout it...)");
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0902000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'm sorry...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0902000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No, it's nothing....\nIt's good to put in some fighting\nspirit ahead of time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... He seems disappointed.\nDid I do something bad?)");
            var0 = 1;
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    switch (var0){
        case 0:
        System_Call_GS2("S10", "PL", 0);
        System_Call_GS2("S11", "M2", 0);
        break ;
        case 1:
        break ;
        }
    System_Call_GS2("S12", "M2", 0);
    }
