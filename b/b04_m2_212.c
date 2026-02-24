section "b04_m2_212"{
    int var0 = Date_GetDateOption(2, 64);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402212_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Eh...\nIs it okay for the dogs and cats to\nbe in the same area...?");
        Message_MsgSel("Wah, they're extremely cute▼", "Which do you like, ｛Shiba＊＊｝?", "They fight because they get along.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402212_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That said, you're more...\nNo, it's nothing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402212_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I like them equally.\nEven if I didn't say that, these\nguys still come towards me...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402212_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You've got the meaning of that\nwrong.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402212_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "This one is tiny...\nI wonder if it gets bullied by the\nbigger ones...");
        Message_MsgSel("Even though it's tiny, it's quite strong.", "It's fine, it'll grow larger soon.", "Let's cheer for it so it won't lose.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402212_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Maybe.\nThe relatively smaller ones are\nquite daring.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402212_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nAs it's growing, it'll probably\nlearn how to fight.");
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
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402212_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "How?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402212_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That dog and cat get along really\nwell, somehow...");
        Message_MsgSel("It's somewhat pleasant.", "Aren't they having a glaring contest?", "Then we should also...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402212_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah....\nHaha, they're playing around.\nIt doesn't have much to do with\nspecies, does it?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402212_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It doesn't look that way to me,\nthough...\nAh, the cat did a punch...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402212_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nDo you want me to glare at you or\nsomething?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402212_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We should too...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Let's show these guys that we get\nalong well, too▼");
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402212_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh? ... Get along?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 7, 0);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402212_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Wait a second.\nFor the sake of argument...\nif we did g-get along well...");
                Voice_PlayVoice("B0402212_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "What's gonna happen if we show it to\nthose guys?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh... I don't know.\nMaybe they'll be jealous?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402212_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nAnd then, after we make them\njealous?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uh... nothing really...\nDo you have any good ideas,\n｛Shiba＊＊｝?");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402212_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It's not like I don't.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? What kind of ideas?");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402212_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Are you sure you wanna know?\nIf I told you, you'd regret it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh?");
                Character_ChFace(0, 7, 0);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402212_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "But if you say that you still want\nto know...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Maybe I should decline...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402212_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah....\nEven if you don't like it, you'll\nfind out one day.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
