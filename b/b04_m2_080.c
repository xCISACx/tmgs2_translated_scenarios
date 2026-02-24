section "b04_m2_080"{
    int var0 = Date_GetDateOption(2, 24);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0402080_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Eh...\nAs I thought, there's lots of\ngreenery.");
        Message_MsgSel("I'm happy being surrounded by flowers▼", "All these plants make the air so fresh!", "That fruit looks yummy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402080_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's not like we're fully surrounded\nby flowers, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402080_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nAlthough it's not natural, it kinda\nfeels like it, for some reason.");
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
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402080_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.... But don't eat it, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0402080_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Pfft... How boring.");
        Message_MsgSel("Let's enjoy the smell of the plants.", "They sell yummy juice at the rest area.", "It's nice thinking about distant worlds.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 0, (#1), 2);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402080_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, I see.\nNow that you mention it, herbs and\nstuff have a relaxing effect.");
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
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402080_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", ".........?\nSorry, I have no idea what you're\ntalking about.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402080_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hmm...\nSounds good, let's go have some.\nI'll wait here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0402080_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey, what's that plant called?\nThe small one outside of the flower\nbed?");
        Message_MsgSel("Why don't we ask the employees?", "Is it a sprout from another plant?", "That's just a weed.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402080_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No...\nIt's fine, I'm not that interested\nin it.");
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
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402080_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, maybe.\nSo it can even grow in places where\nthere isn't much soil.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0402080_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Maybe...\nBut don't go saying things so\ncoldly.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402080_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Just a weed...\nI wonder why it's even growing here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Perhaps its seed was carried here by\nthe wind?\nThe small leaves are cute.");
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402080_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hm... It has a tiny flower. Look.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Ah, you're right.\nWow, the flower is small and white.\nIt's so cute!");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402080_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm?\nWhat did you just say,\n｛Shiba＊＊｝?");
                Voice_PlayVoice("B0402080_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... You too...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Me?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402080_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's similar to you.... That's all.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So... uhh... I'm white and small?\n... Is that what he means?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
