section "b04_m7_075"{
    Effect_OpenParticle(1);
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(7, 2, (#1));
    Character_ChFace(0, 3, 3);
    Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407055_G00000", 7, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Everyone, your presentations.\nWho will be the first person? ...\nWell then, ｛主人公｝.");
    Message_MsgSel("I collected \"burrs\"!", "I examined the m/f ratio of new students.", "I dug a pitfall!");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407055_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah... A cockleburr!\nSometimes they get attached to cats.\nYou collected a lot.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0407055_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "How studious...\nBy the way, what do you understand\nfrom this data?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407055_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "And it's so muddy...\nI will bury it properly before we\nreturn.\nIt's not good if someone got hurt.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
